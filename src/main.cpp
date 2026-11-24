// main.cpp — entry point. Wires config and subsystems together.

#include "tiktokhddl/settings.h"
#include "tiktokhddl/fetcher.h"
#include "tiktokhddl/cleaner.h"
#include "tiktokhddl/queue.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    tiktokhddl::Settings settings = tiktokhddl::Settings::load_default();
    tiktokhddl::Fetcher fetcher(settings.store_path);
    tiktokhddl::Cleaner cleaner(settings.store_path);
    tiktokhddl::Queue queue(settings.store_path);
    std::fprintf(stderr, "[tiktok-hd-dl] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
