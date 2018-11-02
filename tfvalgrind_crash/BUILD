package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "fake_tfvalgrind_crash",
    srcs = [
        "fake_tfvalgrind_crash.cc",
    ],
    visibility = ["//visibility:public"],
    copts = ["-Wunused-command-line-argument -g"],
    deps = [
        "@org_tensorflow//tensorflow/cc/saved_model:loader",
        "@org_tensorflow//tensorflow/cc/saved_model:signature_constants",
        "@org_tensorflow//tensorflow/cc/saved_model:tag_constants",
        "@org_tensorflow//tensorflow/core:lib",
    ],
)
