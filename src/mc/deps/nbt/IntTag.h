#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
// clang-format on

class IntTag : public ::Tag {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> data;
    // NOLINTEND
#else // @header-generator platform
    int data;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    IntTag& operator=(IntTag const&);
    IntTag(IntTag const&);
#else // @header-generator platform
    template <std::integral T>
    constexpr IntTag& operator=(int value) noexcept {
        data = (int)value;
        return *this;
    }

    template <std::integral T>
    [[nodiscard]] constexpr operator T() const noexcept {
        return (T)data;
    }

    template <std::integral T>
    [[nodiscard]] constexpr explicit IntTag(T value = 0) noexcept : data((int)value) {}

    [[nodiscard]] constexpr IntTag() noexcept : data(0) {}

    [[nodiscard]] IntTag operator-() const noexcept { return IntTag{-data}; }
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IntTag();
#else // @header-generator platform
    virtual void write(::IDataOutput& dos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::IDataOutput&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&);
#else // @header-generator platform
    virtual ::Tag::Type getId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::std::string toString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Tag::Type getId() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool equals(::Tag const&) const;
#else // @header-generator platform
    virtual bool equals(::Tag const& rhs) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Tag> copy() const;

    virtual ulong hash() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual uint64 hash() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $write(::IDataOutput&) const;
#else // @header-generator platform
    MCAPI void $write(::IDataOutput& dos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $load(::IDataInput&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCFOLD ::Tag::Type $getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tag::Type $getId() const;
#else // @header-generator platform
    MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $equals(::Tag const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Tag> $copy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Tag> $copy() const;
#else // @header-generator platform
    MCAPI bool $equals(::Tag const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $hash() const;
#else // @header-generator platform
    MCAPI uint64 $hash() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace ll::inline literals::inline nbt_literals {
[[nodiscard]] inline IntTag operator""_i(uint64 num) noexcept { return IntTag{(int)num}; }
} // namespace ll::inline literals::inline nbt_literals
#endif // @header-generator platform
