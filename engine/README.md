# Run


pull dependence(cutlass):
```
git submodule init 
git submodule update
```

build:

```
export CUDA_HOME=/usr/local/cuda
bash build.sh
```

run test of w2a16:

```
./bin/test_any_mma ${M} ${N} ${K} 16 2 1 > ./results/${M}x${N}x${K}_w2a16.txt

./bin/test_any_mma 512 512 512  16 2 1 > ./results/512x512x512_w2a16.txt
```