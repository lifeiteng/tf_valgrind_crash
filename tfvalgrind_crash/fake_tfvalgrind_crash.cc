#include "tensorflow/core/platform/init_main.h"
#include "tensorflow/core/public/session.h"
#include "tensorflow/core/public/session_options.h"

int main(int argc, char** argv) {
  tensorflow::port::InitMain(argv[0], &argc, &argv);
  if (argc != 1) {
    std::cout << "unknown argument: " << argv[1];
  }

  tensorflow::SessionOptions session_options;
  tensorflow::Session* session_p = nullptr;
  TF_CHECK_OK(tensorflow::NewSession(session_options, &session_p));
  TF_CHECK_OK(session_p->Close());

  return 0;
}
