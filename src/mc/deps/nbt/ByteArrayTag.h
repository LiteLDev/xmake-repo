#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
// clang-format on

class ByteArrayTag : public ::Tag {
#else // @header-generator platform
class ByteArrayTag : public ::Tag, public std::vector<uchar> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ByteArrayTag inner types define
    using ArrayData = std::vector<uchar>;
#else // @header-generator platform
    using Array = std::vector<uchar>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    // NOLINTEND
#else // @header-generator platform
    using Tag::operator==;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ByteArrayTag& operator=(ByteArrayTag const&);
    ByteArrayTag(ByteArrayTag const&);
#else // @header-generator platform
    [[nodiscard]] constexpr ByteArrayTag() = default;

    [[nodiscard]] constexpr ByteArrayTag(Array arr) : Array(std::move(arr)) {}

    [[nodiscard]] constexpr ByteArrayTag(std::initializer_list<uchar> val) : Array(val) {}
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ByteArrayTag();
#else // @header-generator platform
    virtual ::Tag::Type getId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::IDataOutput&) const;
#else // @header-generator platform
    virtual ::std::string toString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&);
#else // @header-generator platform
    virtual bool equals(::Tag const& rhs) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Tag::Type getId() const;
#else // @header-generator platform
    virtual void write(::IDataOutput& dos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool equals(::Tag const&) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;
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
    MCFOLD ::Tag::Type $getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $load(::IDataInput&);
#else // @header-generator platform
    MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCFOLD bool $equals(::Tag const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tag::Type $getId() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Tag> $copy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $equals(::Tag const&) const;
#else // @header-generator platform
    MCAPI void $write(::IDataOutput& dos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Tag> $copy() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);
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
