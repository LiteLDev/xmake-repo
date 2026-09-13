#include "ll/api/utils/StacktraceUtils.h"

#include <dlfcn.h>
#include <new>
#include <system_error>
#include <unwind.h>

#include "ll/api/utils/HashUtils.h"

namespace ll {
Stacktrace Stacktrace::current(size_t skip, size_t maxDepth) {
    Stacktrace result;
    struct Capture {
        std::vector<StacktraceEntry>& mEntries;
        size_t                        mSkip;
        size_t                        mLimit;
        bool                          mAllocationFailed{};
    } capture{result.entries, skip + 1, maxDepth};
    _Unwind_Backtrace(
        [](_Unwind_Context* context, void* opaque) -> _Unwind_Reason_Code {
            auto& state   = *static_cast<Capture*>(opaque);
            auto  address = _Unwind_GetIP(context);
            if (!address) return _URC_NO_REASON;
            if (state.mSkip) {
                --state.mSkip;
                return _URC_NO_REASON;
            }
            if (state.mEntries.size() >= state.mLimit) return _URC_END_OF_STACK;
            try {
                state.mEntries.emplace_back(reinterpret_cast<void*>(address));
            } catch (...) {
                state.mAllocationFailed = true;
                return _URC_END_OF_STACK;
            }
            return _URC_NO_REASON;
        },
        &capture
    );
    if (capture.mAllocationFailed) throw std::bad_alloc();
    result.hash = hash_utils::HashCombiner{}.addRange(result.entries);
    return result;
}

Stacktrace Stacktrace::fromThread(std::thread::id id) {
    if (id != std::this_thread::get_id()) {
        throw std::system_error(
            std::make_error_code(std::errc::not_supported),
            "cross-thread stack capture is unavailable"
        );
    }
    return current(1);
}
} // namespace ll

namespace ll::inline utils::stacktrace_utils {
StackTraceEntryInfo getInfo(StacktraceEntry const& entry) {
    StackTraceEntryInfo result;
    Dl_info             info{};
    if (::dladdr(entry.native_handle(), &info)) {
        if (info.dli_fname) result.file = info.dli_fname;
        if (info.dli_sname) result.name = info.dli_sname;
        if (info.dli_saddr)
            result.displacement =
                reinterpret_cast<uintptr_t>(entry.native_handle()) - reinterpret_cast<uintptr_t>(info.dli_saddr);
    }
    return result;
}

std::string toString(StacktraceEntry const& entry) {
    auto        info   = getInfo(entry);
    std::string result = info.file;
    if (!info.name.empty()) result += "!" + info.name;
    if (info.displacement) result += "+" + std::to_string(*info.displacement);
    if (result.empty()) result = std::to_string(reinterpret_cast<uintptr_t>(entry.native_handle()));
    return result;
}

std::string toString(Stacktrace const& trace) {
    std::string result;
    for (size_t i = 0; i < trace.size(); ++i) {
        result += toString(trace[i]);
        result += '\n';
    }
    return result;
}
} // namespace ll::inline utils::stacktrace_utils
