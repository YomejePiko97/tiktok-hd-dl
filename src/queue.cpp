// queue.cpp — part of tiktok-hd-dl.

#include "tiktokhddl/queue.h"

#include <cstdio>

namespace tiktokhddl {

Queue::Queue(const std::string& config_path)
    : config_path_(config_path) {}

void Queue::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Queue::run() {
    if (verbose_) std::fprintf(stderr, "[tiktok-hd-dl] queue: run\n");
    // core logic lives here
    return true;
}

}  // namespace tiktokhddl
