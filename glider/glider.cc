#include <iostream>

namespace {
  void Usage() {
    fprintf(stderr,
      "Glider JPEG/PNG Quick Binary Reader, Usage: \n"
      "glider [flags] input_filename\n"
      "\n"
      "Flags:\n"
      " --color    - Print Result with colors.\n");
    exit(1);
  }
}

int main(int argc, char** argv) {
  int color = 0;
  int opt_idx = 1;
  for(; opt_idx < argc; opt_idx++) {
    if(strnlen(argv[opt_idx], 2) < 2 || argv[opt_idx][0] != '-' || argv[opt_idx][1] != '-') {
      break;
    }
    if(!strcmp(argv[opt_idx], "--color")) {
      color = 1;
    } else {
      fprintf(stderr, "Unknown commandline flag : %s\n", argv[opt_idx]);
      Usage();
    }
  }

  if(argc - opt_idx != 1) {
    Usage();
  }
  
}