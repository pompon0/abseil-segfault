cc_library(
    name = "ctx",
    hdrs = ["ctx.h"],
    deps = [
        "@abseil//absl/time:time",
    ],
)

cc_binary(
    name = "seg",
    srcs = ["seg.cc"],
    deps = [
        ":ctx",
        "@abseil//absl/flags:parse",
    ],
    features = ["fully_static_link"],
    linkopts = [
        "-lm",
        "-lstdc++",
        "-static-libstdc++",
    ],
)
