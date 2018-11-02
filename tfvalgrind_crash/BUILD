package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "fake_tfvalgrind_crash",
    srcs = [
        "fake_tfvalgrind_crash.cc",
    ],
    visibility = ["//visibility:public"],
    copts = ["-Wunused-command-line-argument -g"],
    deps = [
        "//tensorflow/cc/saved_model:loader",
        "//tensorflow/cc/saved_model:signature_constants",
        "//tensorflow/cc/saved_model:tag_constants",
        "//tensorflow/core:lib",
    ],
)
