
rm callgrind.out.*

for (( i = 0; i < 20; i++ )); do
	echo "--------------- Iter $i ---------------------"
	valgrind --tool=callgrind --dump-instr=yes --demangle=yes \
		bazel-bin/tfvalgrind_crash/fake_tfvalgrind_crash || exit 1
	echo "---------------------------------------------"
	echo ""
	echo ""
	echo ""
	echo ""
done

rm callgrind.out.*

echo "PASS"
