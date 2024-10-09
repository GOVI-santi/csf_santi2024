for i in `ls ../v2_*`
do
	echo "####### Processing $i"
	cfile=`basename $i`
	salmon quant -i ../salmon_index \
		-l A \
         	-r  $i \
         	-p 8 \
		--validateMappings \
		-o $cfile.quant

done


