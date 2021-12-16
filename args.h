#ifndef         _ARGS_H
    #define     _ARGS_H
    #include    <vector>

class args {
private:
    std::vector<char*> _args;
    int     _argc;
    char**  _argv;
public:
    args() {}
    args(int argc, char **argv) {
        _argc = argc;
        _argv = argv;
        _args = std::vector<char*>(argv, argv + argc);
    }
    args(std::vector<char*> args) {
        _argc = args.size();
        _argv = new char*[_argc];
        _args = args;
        for (int i = 0; i < _argc; ++i) {
            _argv[i] = args[i];
        }
    }
}