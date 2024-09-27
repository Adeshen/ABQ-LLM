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

run test of w2a8:
```
./bin/test_any_mma ${M} ${N} ${K} 8 2 1 > ./results/${M}x${N}x${K}_w2a8.txt
./bin/test_any_mma 512 512 512 8 2 1 > ./results/512x512x512_w2a8.txt
```

# result example

## w2a16
3060ti
```
80 16 2 1024 1024 1024 sign  1 32 256 8 32 128 8 8 128 2 packing 2153.701305 (us) exec 587.111473 (us) 3.657710 TOPS | 117.046722 B-TOPS | FAILED

```

## w2a8
3060ti
```
80 8 2 512 512 512 sign  1 32 256 8 32 128 8 8 128 2 packing 108.430333 (us) exec 53.980161 (us) 4.972854 TOPS | 79.565659 B-TOPS | FAILED
80 8 2 512 512 512 sign  1 32 256 8 32 128 8 8 128 3 packing 105.164804 (us) exec 45.143038 (us) 5.946331 TOPS | 95.141296 B-TOPS | FAILED
80 8 2 512 512 512 sign  1 32 256 8 32 128 8 8 128 4 packing 105.190396 (us) exec 42.427391 (us) 6.326938 TOPS | 101.231003 B-TOPS | FAILED
80 8 2 512 512 512 sign  1 48 256 8 48 128 8 8 128 2 packing 98.808832 (us) exec 36.380671 (us) 7.378519 TOPS | 118.056297 B-TOPS | FAILED
80 8 2 512 512 512 sign  1 48 256 8 48 128 8 8 128 3 packing 98.535426 (us) exec 37.123073 (us) 7.230960 TOPS | 115.695358 B-TOPS | FAILED
80 8 2 512 512 512 sign  1 48 256 8 48 128 8 8 128 4 packing 96.620545 (us) exec 39.636992 (us) 6.772346 TOPS | 108.357544 B-TOPS | FAILED
```
