#pragma once
#include "ll/api/android/Kernel.h"

namespace ll::android {
// Internal seam for transactional activation and owner-scoped event handling.
// Fixtures supply owned backends; this interface is never dynamically exported.
class RuntimeOperations {
public:
    virtual ~RuntimeOperations()                                                                        = default;
    virtual bool     enable() noexcept                                                                  = 0;
    virtual bool     disable() noexcept                                                                 = 0;
    virtual bool     clean() const noexcept                                                             = 0;
    virtual bool     inCallback() const noexcept                                                        = 0;
    virtual uint64_t subscribe(uint32_t kind, LLAndroidEventCallback callback, void* userData) noexcept = 0;
    virtual bool     unsubscribe(uint64_t token) noexcept                                               = 0;
};
} // namespace ll::android
