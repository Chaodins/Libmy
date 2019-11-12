#!/bin/bash

name=$1;
type=$2;

main_path="src/main/${name}.c";
test_path="src/test/${name}_tests.c";

touch "${test_path}";
touch "${main_path}";
echo "#include \"my.h\"" >> ${main_path};
echo "" >> ${main_path};
echo "${type} ${name}()" >> ${main_path};
echo "{" >> ${main_path};
echo "" >> ${main_path};
echo "}" >> ${main_path};
echo "#include \"../main/my.h\"" >> ${test_path};
echo "" >> ${test_path};
echo "#include <criterion/criterion.h>" >> ${test_path};
echo "#include <criterion/redirect.h>" >> ${test_path};
echo "" >> ${test_path};
echo "Test(${name}, expected)" >> ${test_path};
echo "{" >> ${test_path};
echo "" >> ${test_path};
echo "}" >> ${test_path};
