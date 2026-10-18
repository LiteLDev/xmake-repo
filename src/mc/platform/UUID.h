#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ulong[2]> Data;
    // NOLINTEND
#else // @header-generator platform
    uint64 a, b;

    [[nodiscard]] constexpr UUID(uint64 a = 0, uint64 b = 0) noexcept : a(a), b(b) {}

    [[nodiscard]] inline explicit UUID(std::string const& uuidStr) : UUID(fromString(uuidStr)) {}

    [[nodiscard]] inline explicit UUID(std::string_view uuidStr) : UUID(fromString(std::string{uuidStr})) {}

    LLNDAPI static mce::UUID random();

    [[nodiscard]] inline static mce::UUID fromStringHash(std::string_view sv) {
        return {ll::hash_utils::doHash(sv), ll::hash_utils::doHash2(sv)};
    }

    [[nodiscard]] inline explicit operator bool() const { return a != 0 && b != 0; }

    [[nodiscard]] inline explicit operator std::string() const { return asString(); }

    [[nodiscard]] constexpr bool operator==(UUID const& other) const { return (a == other.a) && (b == other.b); }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(UUID const& other) const {
        if (a != other.a) {
            return a <=> other.a;
        }
        return b <=> other.b;
    }

    LLNDAPI static bool canParse(std::string_view in);
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string asString() const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool operator<(::mce::UUID const&) const;
#else // @header-generator platform
    MCFOLD ::std::string asString() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool canParse(std::string_view);

    MCNAPI static ::mce::UUID fromString(std::string_view);
#else // @header-generator platform
    MCAPI static ::mce::UUID fromString(::std::string_view in);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::mce::UUID& EMPTY();
#else // @header-generator platform
    MCAPI static ::mce::UUID& EMPTY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong& STRING_LENGTH();
#else // @header-generator platform
    MCAPI static uint64& STRING_LENGTH();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace mce
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace std {
template <>
struct hash<mce::UUID> {
    size_t operator()(mce::UUID const& id) const noexcept { return id.a ^ (522133279 * id.b); }
};
} // namespace std
#endif // @header-generator platform
