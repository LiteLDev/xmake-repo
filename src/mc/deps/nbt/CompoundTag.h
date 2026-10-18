#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "ll/api/Expected.h"
#endif // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ByteArrayTag;
class ByteTag;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTagVariant;
#if defined(LL_PLAT_A) // @header-generator platform
class DoubleTag;
class FloatTag;
#else // @header-generator platform
#endif // @header-generator platform
class IDataInput;
class IDataOutput;
#if defined(LL_PLAT_A) // @header-generator platform
class Int64Tag;
class IntArrayTag;
class IntTag;
class ListTag;
#else // @header-generator platform
#endif // @header-generator platform
class PrintStream;
#if defined(LL_PLAT_A) // @header-generator platform
class ShortTag;
class StringTag;
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class CompoundTag : public ::Tag {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // CompoundTag inner types define
    using StringView = std::string_view;
    using TagMap     = std::map<std::string, CompoundTagVariant, std::less<void>>;
#else // @header-generator platform
    using TagMap = std::map<std::string, CompoundTagVariant, std::less<void>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    CompoundTag();
    CompoundTag(TagMap tags);
    CompoundTag(std::initializer_list<TagMap::value_type> tagPairs);
    CompoundTag(CompoundTag const& other);
    CompoundTag(CompoundTag&& other);
    CompoundTag& operator=(CompoundTag const& other);
    CompoundTag& operator=(CompoundTag&& other);
#else // @header-generator platform
    TagMap mTags;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    CompoundTagVariant&       operator[](std::string_view key);
    CompoundTagVariant const& operator[](std::string_view key) const;
#else // @header-generator platform
    using iterator               = TagMap::iterator;
    using const_iterator         = TagMap::const_iterator;
    using reverse_iterator       = TagMap::reverse_iterator;
    using const_reverse_iterator = TagMap::const_reverse_iterator;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    [[nodiscard]] CompoundTagVariant& at(std::string_view key) {
        return const_cast<CompoundTagVariant&>(std::as_const(*this).operator[](key));
    }
    [[nodiscard]] CompoundTagVariant const& at(std::string_view key) const { return operator[](key); }
#else // @header-generator platform
    CompoundTag() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mTags;
    // NOLINTEND
#else // @header-generator platform
    CompoundTag(TagMap tags) : mTags(std::move(tags)) {}

    CompoundTag(std::initializer_list<TagMap::value_type> tagPairs) : mTags(tagPairs) {}

    CompoundTag(CompoundTag const&)            = default;
    CompoundTag& operator=(CompoundTag const&) = default;
    CompoundTag(CompoundTag&&)                 = default;
    CompoundTag& operator=(CompoundTag&&)      = default;

    [[nodiscard]] CompoundTagVariant&       operator[](std::string_view index);
    [[nodiscard]] CompoundTagVariant const& operator[](std::string_view index) const;

    [[nodiscard]] CompoundTagVariant& at(std::string_view index) {
        return const_cast<CompoundTagVariant&>(std::as_const(*this).operator[](index));
    }
    [[nodiscard]] CompoundTagVariant const& at(std::string_view index) const { return operator[](index); }

    LLNDAPI static ll::Expected<CompoundTag>
    fromSnbt(std::string_view snbt, optional_ref<size_t> parsedLength = std::nullopt) noexcept;

    LLNDAPI std::string toBinaryNbt(bool isLittleEndian = true) const;
    LLNDAPI static ll::Expected<CompoundTag>
    fromBinaryNbt(std::string_view dataView, bool isLittleEndian = true) noexcept;

    LLNDAPI std::string                      toNetworkNbt() const;
    LLNDAPI static ll::Expected<CompoundTag> fromNetworkNbt(std::string const& data) noexcept;

    [[nodiscard]] size_t size() const noexcept { return mTags.size(); }
    [[nodiscard]] bool   empty() const noexcept { return mTags.empty(); }

    [[nodiscard]] auto begin() noexcept;
    [[nodiscard]] auto begin() const noexcept;
    [[nodiscard]] auto end() noexcept;
    [[nodiscard]] auto end() const noexcept;
    [[nodiscard]] auto rbegin() noexcept;
    [[nodiscard]] auto rbegin() const noexcept;
    [[nodiscard]] auto rend() noexcept;
    [[nodiscard]] auto rend() const noexcept;
    [[nodiscard]] auto cbegin() const noexcept;
    [[nodiscard]] auto cend() const noexcept;
    [[nodiscard]] auto crbegin() const noexcept;
    [[nodiscard]] auto crend() const noexcept;

    bool               erase(std::string_view name);
    void               rename(std::string_view name, std::string_view newName);
    [[nodiscard]] bool contains(std::string_view name) const { return mTags.contains(name); }
    LLNDAPI bool       contains(std::string_view name, Type type) const;
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CompoundTag();
#else // @header-generator platform
    virtual ~CompoundTag() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::IDataOutput&) const;
#else // @header-generator platform
    virtual void write(::IDataOutput& dos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::Tag::Type getId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Tag::Type getId() const;
#else // @header-generator platform
    virtual ::std::string toString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool equals(::Tag const&) const;
#else // @header-generator platform
    virtual void print(::std::string const& prefix_, ::PrintStream& out) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void print(std::string const&, ::PrintStream&) const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Tag> copy() const;
#else // @header-generator platform
    virtual uint64 hash() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong hash() const;
#else // @header-generator platform
    virtual bool equals(::Tag const& obj) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void append(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void append(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, CompoundTagVariant>,
        std::__tree_node<std::__value_type<std::string, CompoundTagVariant>, void*>*,
        long>>
           begin() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clear();
#else // @header-generator platform
    MCAPI void deepCopy(::CompoundTag const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> clone() const;
#else // @header-generator platform
    MCFOLD ::Tag const* get(::std::string_view name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool contains(std::string_view) const;
#else // @header-generator platform
    MCFOLD ::Tag* get(::std::string_view name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool contains(std::string_view, ::Tag::Type) const;
#else // @header-generator platform
    MCAPI ::std::vector<uchar> const& getByteArray(::std::string_view name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deepCopy(::CompoundTag const&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> load(::IDataInput& dis, int depth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string, CompoundTagVariant>,
        std::__tree_node<std::__value_type<std::string, CompoundTagVariant>, void*>*,
        long>>
           end() const;
#else // @header-generator platform
    MCAPI ::Tag& put(::std::string name, ::Tag&& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tag const* get(std::string_view) const;
#else // @header-generator platform
    MCAPI ::Tag* put(::std::string name, ::std::unique_ptr<::Tag> tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tag* get(std::string_view);
#else // @header-generator platform
    MCAPI void putBoolean(::std::string name, bool val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBoolean(std::string_view) const;
#else // @header-generator platform
    MCAPI uchar& putByte(::std::string name, uchar value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar getByte(std::string_view) const;
#else // @header-generator platform
    MCAPI ::std::vector<uchar>& putByteArray(::std::string name, ::std::vector<uchar> mem);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<uchar> const& getByteArray(std::string_view) const;
#else // @header-generator platform
    MCAPI ::CompoundTag& putCompound(::std::string name, ::CompoundTag value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ByteTag const* getByteTag(std::string_view) const;
#else // @header-generator platform
    MCAPI ::CompoundTag* putCompound(::std::string name, ::std::unique_ptr<::CompoundTag> value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag const* getCompound(std::string_view) const;
#else // @header-generator platform
    MCAPI float& putFloat(::std::string name, float value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag* getCompound(std::string_view);
#else // @header-generator platform
    MCAPI int& putInt(::std::string name, int value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFloat(std::string_view) const;
#else // @header-generator platform
    MCAPI int64& putInt64(::std::string name, int64 value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getInt(std::string_view) const;
#else // @header-generator platform
    MCAPI short& putShort(::std::string name, short value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long getInt64(std::string_view) const;
#else // @header-generator platform
    MCAPI ::std::string& putString(::std::string name, ::std::string value);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Int64Tag const* getInt64Tag(std::string_view) const;
#else // @header-generator platform
    MCAPI bool remove(::std::string_view name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Int64Tag* getInt64Tag(std::string_view);
#else // @header-generator platform
    MCAPI void rename(::std::string_view name, ::std::string newName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::IntTag const* getIntTag(std::string_view) const;
#else // @header-generator platform
    MCAPI void write(::IDataOutput& dos, int depth) const;
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ListTag const* getList(std::string_view) const;
#else // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(::CompoundTag&& rhs);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
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
    MCAPI void $print(::std::string const& prefix_, ::PrintStream& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $print(std::string const&, ::PrintStream&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Tag> $copy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Tag> $copy() const;
#else // @header-generator platform
    MCAPI uint64 $hash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $hash() const;
#else // @header-generator platform
    MCAPI bool $equals(::Tag const& obj) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#include "mc/deps/nbt/CompoundTagVariant.h"
