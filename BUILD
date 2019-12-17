cc_binary(
    name = "seg",
    srcs = ["seg.cc"],
    deps = [
        "@abseil//absl/flags:parse",
    ],
    features = ["fully_static_link"],
    linkopts = [
        "-lm",
        "-lstdc++",
        "-static-libstdc++",
    ],
)
