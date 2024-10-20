#define NOB_IMPLEMENTATION
#include "nob.h"

int main(int argc, char **argv) {
  NOB_GO_REBUILD_URSELF(argc, argv);

  Nob_Cmd cmd = {0};
  nob_cmd_append(&cmd, "cc");
  nob_cmd_append(&cmd, "-Wall", "-Wextra");
  nob_cmd_append(&cmd, "-I./raylib-5.0_linux_amd64/include");
  nob_cmd_append(&cmd, "-o", "main");
  nob_cmd_append(&cmd, "main.c");
  nob_cmd_append(&cmd, "-Wl,-rpath=./raylib-5.0_linux_amd64/lib/");
  nob_cmd_append(&cmd, "-L./raylib-5.0_linux_amd64/lib");
  nob_cmd_append(&cmd, "-l:libraylib.so");
  if (!nob_cmd_run_sync(cmd)) {
    return 1;
  }
  return 0;

}
