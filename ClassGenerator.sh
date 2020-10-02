#!bin/sh

class_name=$1
dest_dir=$2

cp Template.cpp $class_name.cpp
cp Template.hpp $class_name.hpp

sed -i 's/Template/'$class_name'/g' $class_name.cpp
sed -i 's/Template/'$class_name'/g' $class_name.hpp

upped=`echo $class_name | tr '[a-z]' '[A-Z]' `
sed -i 's/TEMPLATE/'$upped'/g' $class_name.cpp
sed -i 's/TEMPLATE/'$upped'/g' $class_name.hpp

mv $class_name.cpp $dest_dir
mv $class_name.hpp $dest_dir

