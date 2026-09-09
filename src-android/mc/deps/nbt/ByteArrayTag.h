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

class ByteArrayTag : public ::Tag {
public:
    // ByteArrayTag inner types define
    using ArrayData = std::vector<uchar>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<uchar>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    ByteArrayTag& operator=(ByteArrayTag const&);
    ByteArrayTag(ByteArrayTag const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ByteArrayTag();

    virtual void write(::IDataOutput&) const;

    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&);

    virtual std::string toString() const;

    virtual ::Tag::Type getId() const;

    virtual bool equals(::Tag const&) const;

    virtual std::unique_ptr<Tag> copy() const;

    virtual ulong hash() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $write(::IDataOutput&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $load(::IDataInput&);

    MCNAPI std::string $toString() const;

    MCNAPI ::Tag::Type $getId() const;

    MCNAPI bool $equals(::Tag const&) const;

    MCNAPI std::unique_ptr<Tag> $copy() const;

    MCNAPI ulong $hash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
