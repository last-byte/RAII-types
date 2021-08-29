# RAII types
## Code to handle certain Windows types using the RAII paradigm
Windows APIs are tricky and it's easy to leaks variables like HANDLEs. In order to avoid so the C++'s RAII paradigm can be used. The code in this repository does that, defining new types in the RAII namespace that will auto-terminate once they go out of scope.

### To-do:
- [ ] add pointer copy to the types
