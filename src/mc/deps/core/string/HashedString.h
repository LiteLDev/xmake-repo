#pragma once

#include "mc/_HeaderOutputPredefine.h"

class HashedString {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong>                 mStrHash;
    ::ll::TypedStorage<8, 24, std::string>          mStr;
    ::ll::TypedStorage<8, 8, ::HashedString const*> mLastMatch;
    // NOLINTEND
#else // @header-generator platform
    [[nodiscard]] static constexpr uint64 computeHash(std::string_view str) {
        if (str.empty()) return 0;
        uint64 hash = 0xCBF29CE484222325ull;
        for (char s : str) {
            hash = s ^ (0x100000001B3ull * hash);
        }
        return hash;
    }

    // Constructors
    [[nodiscard]] constexpr HashedString(std::nullptr_t = nullptr) noexcept : mStrHash(0), mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(uint64 h, char const* mStr) noexcept
    : mStrHash(h),
      mStr(mStr),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(std::string_view mStr) noexcept
    : mStrHash(computeHash(mStr)),
      mStr(mStr),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(std::string&& s) noexcept
    : mStrHash(computeHash(s)),
      mStr(std::move(s)),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(std::string const& s) noexcept
    : mStrHash(computeHash(s)),
      mStr(s),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(char const* mStr) noexcept : HashedString(std::string{mStr}) {}

    [[nodiscard]] constexpr HashedString(HashedString const& other) noexcept
    : mStrHash(other.mStrHash),
      mStr(other.mStr),
      mLastMatch(nullptr) {}

    [[nodiscard]] constexpr HashedString(HashedString&& other) noexcept
    : mStrHash(other.mStrHash),
      mStr(std::move(other.mStr)),
      mLastMatch(other.mLastMatch) {
        other.mStrHash   = 0;
        other.mLastMatch = nullptr;
    }

    constexpr HashedString& operator=(HashedString const& other) noexcept {
        if (this == &other) {
            return *this;
        }
        mStrHash   = other.mStrHash;
        mStr       = other.mStr;
        mLastMatch = nullptr;
        return *this;
    }

    constexpr HashedString& operator=(HashedString&& other) noexcept {
        if (this == &other) {
            return *this;
        }
        mStrHash         = other.mStrHash;
        mStr             = std::move(other.mStr);
        mLastMatch       = other.mLastMatch;
        other.mStrHash   = 0;
        other.mLastMatch = nullptr;
        return *this;
    }

    // Accessors
    [[nodiscard]] constexpr char const* c_str() const noexcept { return mStr.c_str(); }

    [[nodiscard]] constexpr std::string const& getString() const noexcept { return mStr; }

    [[nodiscard]] constexpr uint64 getHash() const noexcept { return mStrHash; }

    [[nodiscard]] constexpr bool empty() const noexcept { return mStr.empty(); }

    // Mutators
    constexpr void clear() noexcept {
        mStrHash = 0;
        mStr.clear();
        mLastMatch = nullptr;
    }

    // Operators
    template <typename StringType>
    [[nodiscard]] constexpr bool operator==(StringType const& rhs) const noexcept {
        return mStr == rhs;
    }

    [[nodiscard]] constexpr bool operator==(HashedString const& other) const noexcept {
        if (mStrHash == other.mStrHash) {
            if (mLastMatch == std::addressof(other) && other.mLastMatch == this) {
                return true;
            }
            if (mStr == other.mStr) {
                mLastMatch       = std::addressof(other);
                other.mLastMatch = this;
                return true;
            }
        }
        mLastMatch = nullptr;
        return false;
    }

    template <typename StringType>
    [[nodiscard]] constexpr bool operator!=(StringType const& rhs) const noexcept {
        return mStr != rhs;
    }

    [[nodiscard]] constexpr bool operator!=(HashedString const& other) const noexcept { return !(*this == other); }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(HashedString const& other) const noexcept {
        if (mStrHash != other.mStrHash) {
            return mStrHash <=> other.mStrHash;
        }
        return mStr <=> other.mStr;
    }

    // Convertors
    [[nodiscard]] constexpr operator std::string const&() const { return mStr; }

    [[nodiscard]] constexpr operator std::string_view() const { return std::string_view(mStr); }
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit HashedString(std::nullptr_t);

    MCNAPI HashedString(::HashedString const&);

    MCNAPI HashedString(::HashedString&&);

    MCNAPI explicit HashedString(char const*);

    MCNAPI explicit HashedString(std::string const&);

    MCNAPI explicit HashedString(std::string_view);

    MCNAPI HashedString(ulong, char const*);

    MCNAPI HashedString(ulong, std::string);

    MCNAPI char const* c_str() const;

    MCNAPI void clear();

    MCNAPI bool empty() const;

    MCNAPI ulong getHash() const;

    MCNAPI uint getHash32Bits() const;

    MCNAPI std::string const& getString() const;

    MCNAPI bool isEmpty() const;

    MCNAPI ::HashedString& operator=(::HashedString const&);

    MCNAPI ::HashedString& operator=(::HashedString&&);

    MCNAPI ~HashedString();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong computeHash(char const*);

    MCNAPI static ulong computeHash(std::string const&);

    MCNAPI static ::HashedString const& getEmptyString();
#else // @header-generator platform
    uint64                        mStrHash;
    ::std::string                 mStr;
    mutable ::HashedString const* mLastMatch;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& defaultErrorValue();
#else // @header-generator platform
    MCAPI static ::HashedString const& defaultErrorValue();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::nullptr_t);
#else // @header-generator platform
    MCAPI void* $ctor(::HashedString const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::HashedString const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::HashedString&&);
#else // @header-generator platform
    MCAPI void* $ctor(char const* str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(char const*);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string_view str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(std::string_view);

    MCNAPI void* $ctor(ulong, char const*);

    MCNAPI void* $ctor(ulong, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(uint64 hash, char const* str);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {

template <>
struct hash<HashedString> {
    size_t operator()(HashedString const& str) const noexcept { return str.getHash(); }
};

} // namespace std
#endif // @header-generator platform
