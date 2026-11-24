// cleaner — part of tiktok-hd-dl.

#pragma once

#include <string>
#include <vector>

namespace tiktokhddl {

class Cleaner {
public:
    explicit Cleaner(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace tiktokhddl
