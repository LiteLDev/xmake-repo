#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/debug/brstd/static_vector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/string/BasicStackString.h"
#endif // @header-generator platform
#include "mc/platform/brstd/basic_cstring_view.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

#include "mc/deps/core/file/Path.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0, int T1> class BasicStackString; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Core {

class PathView {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // PathView inner types declare
    // clang-format off
    struct Hash;
    struct path_view_less;
    // clang-format on
#else // @header-generator platform
    ~PathView() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    // PathView inner types define
    struct Hash {};
#else // @header-generator platform
    PathView(const PathView& other)            = default;
    PathView& operator=(const PathView& other) = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct path_view_less {};
#else // @header-generator platform
    PathView(PathView&& other) noexcept            = default;
    PathView& operator=(PathView&& other) noexcept = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mSrc;
    // NOLINTEND
#else // @header-generator platform
    explicit PathView(const std::string& s) : mSrc(s) {}
    explicit PathView(const char* s) : mSrc(s ? s : "") {}
    explicit PathView(std::string_view s) : mSrc(s) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    PathView();
#else // @header-generator platform
    PathView(const Core::Path& src) : mSrc(src.getUtf8StdString()) {}
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool containsRelativeOperator() const;
#else // @header-generator platform
    [[nodiscard]] size_t size() const { return mSrc.size(); }
    [[nodiscard]] bool   empty() const { return mSrc.empty(); }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Core::PathView& operator=(::Core::PathView&&);
    // NOLINTEND
#else // @header-generator platform
    [[nodiscard]] std::string_view getUtf8StringView() const { return mSrc; }
    [[nodiscard]] const char*      getUtf8CString() const { return mSrc.data(); }
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathView const& EMPTY();
    // NOLINTEND
#else // @header-generator platform
    [[nodiscard]] bool isAbsolute() const {
#ifdef _WIN32
        if (mSrc.size() >= 2 && std::isalpha((unsigned char)mSrc[0]) && mSrc[1] == ':') return true;
        if (mSrc.size() >= 2 && mSrc[0] == '\\' && mSrc[1] == '\\') return true;
        return false;
#else
        return !mSrc.empty() && mSrc.front() == '/';
#endif
    }

private:
    std::string_view mSrc;
#endif // @header-generator platform
};

} // namespace Core
