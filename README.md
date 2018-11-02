# tf_valgrind_crash
A simple example for test valgrind tensorflow

* test under Tensorflow tag `v1.11.0` & `master`

## build
```
TF_CODE_DIR=SET_YOUR_TF_CODE_DIR

cp -r tfvalgrind_crash $TF_CODE_DIR
cp test.sh $TF_CODE_DIR
cd $TF_CODE_DIR

bazel build //tfvalgrind_crash:fake_tfvalgrind_crash
```

## test
```
bash test.sh
```

you will see:
```
test.sh: line 13: 33497 Segmentation fault: 11  valgrind --tool=callgrind --dump-instr=yes --demangle=yes bazel-bin/tfvalgrind_crash/fake_tfvalgrind_crash
```


