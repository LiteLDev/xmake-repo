#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ByteArrayTag;
class ByteTag;
class CompoundTagVariant;
class DoubleTag;
class FloatTag;
class IDataInput;
class IDataOutput;
class Int64Tag;
class IntArrayTag;
class IntTag;
class ListTag;
class PrintStream;
class ShortTag;
class StringTag;
class Vec3;
// clang-format on

class CompoundTag : public ::Tag {
public:
    // CompoundTag inner types define
    using StringView = std::string_view;
    using TagMap     = std::map<std::string, CompoundTagVariant, std::less<void>>;

    CompoundTag();
    CompoundTag(TagMap tags);
    CompoundTag(std::initializer_list<TagMap::value_type> tagPairs);
    CompoundTag(CompoundTag const& other);
    CompoundTag(CompoundTag&& other);
    CompoundTag& operator=(CompoundTag const& other);
    CompoundTag& operator=(CompoundTag&& other);

    CompoundTagVariant&       operator[](std::string_view key);
    CompoundTagVariant const& operator[](std::string_view key) const;

    [[nodiscard]] CompoundTagVariant& at(std::string_view key) {
        return const_cast<CompoundTagVariant&>(std::as_const(*this).operator[](key));
    }
    [[nodiscard]] CompoundTagVariant const& at(std::string_view key) const { return operator[](key); }

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mTags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundTag();

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
    MCNAPI void append(::CompoundTag const&);

    MCNAPI std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, CompoundTagVariant>,
        std::__tree_node<std::__value_type<std::string, CompoundTagVariant>, void*>*,
        long>>
           begin() const;

    MCNAPI void clear();

    MCNAPI std::unique_ptr<CompoundTag> clone() const;

    MCNAPI bool contains(std::string_view) const;

    MCNAPI bool contains(std::string_view, ::Tag::Type) const;

    MCNAPI void deepCopy(::CompoundTag const&);

    MCNAPI std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, CompoundTagVariant>,
        std::__tree_node<std::__value_type<std::string, CompoundTagVariant>, void*>*,
        long>>
           end() const;

    MCNAPI ::Tag const* get(std::string_view) const;

    MCNAPI ::Tag* get(std::string_view);

    MCNAPI bool getBoolean(std::string_view) const;

    MCNAPI uchar getByte(std::string_view) const;

    MCNAPI std::vector<uchar> const& getByteArray(std::string_view) const;

    MCNAPI ::ByteTag const* getByteTag(std::string_view) const;

    MCNAPI ::CompoundTag const* getCompound(std::string_view) const;

    MCNAPI ::CompoundTag* getCompound(std::string_view);

    MCNAPI float getFloat(std::string_view) const;

    MCNAPI int getInt(std::string_view) const;

    MCNAPI long getInt64(std::string_view) const;

    MCNAPI ::Int64Tag const* getInt64Tag(std::string_view) const;

    MCNAPI ::Int64Tag* getInt64Tag(std::string_view);

    MCNAPI ::IntTag const* getIntTag(std::string_view) const;

    MCNAPI ::ListTag const* getList(std::string_view) const;

    MCNAPI ::ListTag* getList(std::string_view);

    MCNAPI short getShort(std::string_view) const;

    MCNAPI ::ShortTag const* getShortTag(std::string_view) const;

    MCNAPI std::string const& getString(std::string_view) const;

    MCNAPI ::StringTag const* getStringTag(std::string_view) const;

    MCNAPI bool isEmpty() const;

    MCNAPI ::Bedrock::Result<void, std::error_code> load(::IDataInput&, int);

    MCNAPI bool operator==(::CompoundTag const&) const;

    MCNAPI ::Tag& put(std::string, ::Tag&&);

    MCNAPI ::Tag* put(std::string, std::unique_ptr<Tag>);

    MCNAPI void putBoolean(std::string, bool);

    MCNAPI uchar& putByte(std::string, uchar);

    MCNAPI std::vector<uchar>& putByteArray(std::string, std::vector<uchar>);

    MCNAPI ::CompoundTag& putCompound(std::string, ::CompoundTag);

    MCNAPI ::CompoundTag* putCompound(std::string, std::unique_ptr<CompoundTag>);

    MCNAPI float& putFloat(std::string, float);

    MCNAPI int& putInt(std::string, int);

    MCNAPI long& putInt64(std::string, long);

    MCNAPI short& putShort(std::string, short);

    MCNAPI std::string& putString(std::string, std::string);

    MCNAPI std::map<
        std::string,
        CompoundTagVariant,
        std::less<void>,
        std::allocator<std::pair<std::string const, CompoundTagVariant>>> const&
    rawView() const;

    MCNAPI bool remove(std::string_view);

    MCNAPI void rename(std::string_view, std::string);

    MCNAPI ulong size() const;

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

#include "mc/deps/nbt/CompoundTagVariant.h"
