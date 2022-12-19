testbench_fir
--------------------------------------------------------
```
// target FIR kernel
for (i = 0; i < NTAPS; ++i) {
    sum += input[i] * coefficient[i];
}
```
<p float="center">
  <img src="https://github.com/tancheng/CGRA-Mapper/blob/master/docs/fir_dfg.png" width="400" />
  <img src="https://github.com/tancheng/CGRA-Mapper/blob/master/docs/fir_map.png" width="230" /> 
</p>
