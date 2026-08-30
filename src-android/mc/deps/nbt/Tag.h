#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

class Tag {
public:
    // Tag inner types define
    enum class Type : uchar {
        End         = 0,
        Byte        = 1,
        Short       = 2,
        Int         = 3,
        Int64       = 4,
        Float       = 5,
        Double      = 6,
        ByteArray   = 7,
        String      = 8,
        List        = 9,
        Compound    = 10,
        IntArray    = 11,
        NumTagTypes = 12,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Tag();

    virtual void deleteChildren();

    virtual void write(::IDataOutput&) const = 0;

    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&) = 0;

    virtual std::string toString() const = 0;

    virtual ::Tag::Type getId() const = 0;

    virtual bool equals(::Tag const&) const;

    virtual void print(std::string const&, ::PrintStream&) const;

    virtual void print(::PrintStream&) const;

    virtual std::unique_ptr<Tag> copy() const = 0;

    virtual ulong hash() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Tag();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getTagName(::Tag::Type);

    MCNAPI static ::Bedrock::Result<std::unique_ptr<Tag>, std::error_code> newTag(::Tag::Type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NullString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deleteChildren();

    MCNAPI bool $equals(::Tag const&) const;

    MCNAPI void $print(std::string const&, ::PrintStream&) const;

    MCNAPI void $print(::PrintStream&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
