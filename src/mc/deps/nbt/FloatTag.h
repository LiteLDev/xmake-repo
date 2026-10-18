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

class FloatTag : public ::Tag {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> data;
    // NOLINTEND
#else // @header-generator platform
    float data;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    FloatTag& operator=(FloatTag const&);
    FloatTag(FloatTag const&);
#else // @header-generator platform
    constexpr FloatTag& operator=(float value) noexcept {
        data = value;
        return *this;
    }

    constexpr operator float() const noexcept { return data; }

    [[nodiscard]] constexpr explicit FloatTag(float value = 0) noexcept : data(value) {}
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FloatTag();
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
[[nodiscard]] inline FloatTag operator""_f(ldouble num) noexcept { return FloatTag{(float)num}; }
} // namespace ll::inline literals::inline nbt_literals
#endif // @header-generator platform
