#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

class ListTag : public ::Tag {
public:
    // ListTag inner types define
    using List = std::vector<std::unique_ptr<Tag>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Tag>>> mList;
    ::ll::UntypedStorage<1, 1>                                   mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ListTag();

    virtual void deleteChildren();

    virtual void write(::IDataOutput&) const;

    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&);

    virtual std::string toString() const;

    virtual ::Tag::Type getId() const;

    virtual bool equals(::Tag const&) const;

    virtual void print(std::string const&, ::PrintStream&) const;

    virtual std::unique_ptr<Tag> copy() const;

    virtual ulong hash() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void add(std::unique_ptr<Tag>);

    MCNAPI std::unique_ptr<ListTag> copyList() const;

    MCNAPI void forEachCompoundTag(::brstd::function_ref<void(const CompoundTag&)>) const;

    MCNAPI void forEachTag(::brstd::function_ref<void(const Tag&)>) const;

    MCNAPI ::Tag* get(int) const;

    MCNAPI uchar getByte(int) const;

    MCNAPI ::CompoundTag const* getCompound(ulong) const;

    MCNAPI ::CompoundTag* getCompound(ulong);

    MCNAPI double getDouble(int) const;

    MCNAPI float getFloat(int) const;

    MCNAPI int getInt(int) const;

    MCNAPI long getInt64(int) const;

    MCNAPI std::string const& getString(int) const;

    MCNAPI ::Tag::Type getType() const;

    MCNAPI ::Bedrock::Result<void, std::error_code> load(::IDataInput&, int);

    MCNAPI int size() const;

    MCNAPI void write(::IDataOutput&, int) const;
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

    MCNAPI void $write(::IDataOutput&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $load(::IDataInput&);

    MCNAPI std::string $toString() const;

    MCNAPI ::Tag::Type $getId() const;

    MCNAPI bool $equals(::Tag const&) const;

    MCNAPI void $print(std::string const&, ::PrintStream&) const;

    MCNAPI std::unique_ptr<Tag> $copy() const;

    MCNAPI ulong $hash() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
