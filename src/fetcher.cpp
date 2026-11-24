// fetcher.cpp — part of tiktok-hd-dl.

#include "tiktokhddl/fetcher.h"

#include <cstdio>

namespace tiktokhddl {

Fetcher::Fetcher(const std::string& config_path)
    : config_path_(config_path) {}

void Fetcher::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Fetcher::run() {
    if (verbose_) std::fprintf(stderr, "[tiktok-hd-dl] fetcher: run\n");
    // core logic lives here
    return true;
}

}  // namespace tiktokhddl
