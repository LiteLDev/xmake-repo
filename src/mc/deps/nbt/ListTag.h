#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/nbt/UniqueTagPtr.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/function_ref.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class ListTag : public ::Tag {
#else // @header-generator platform
class CompoundTagVariant;

class ListTag : public ::Tag, public std::vector<UniqueTagPtr> {
#endif // @header-generator platform
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ListTag inner types define
    using List = std::vector<std::unique_ptr<Tag>>;
#else // @header-generator platform
    using List = std::vector<UniqueTagPtr>;
    Tag::Type mType{Tag::End};

    using Tag::operator==;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Tag>>> mList;
    ::ll::UntypedStorage<1, 1>                                   mType;
    // NOLINTEND
#else // @header-generator platform
    [[nodiscard]] constexpr ListTag() = default;

    [[nodiscard]] constexpr ListTag(List tags) : List(std::move(tags)) {
        if (!empty()) mType = front().getId();
    }
    [[nodiscard]] constexpr ListTag(std::initializer_list<CompoundTagVariant> tags);
    [[nodiscard]] constexpr ListTag(std::vector<CompoundTagVariant> tags);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ListTag();
#else // @header-generator platform
    virtual void write(::IDataOutput& dos) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void deleteChildren();
#else // @header-generator platform
    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::IDataOutput&) const;
#else // @header-generator platform
    virtual ::Tag::Type getId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> load(::IDataInput&);
#else // @header-generator platform
    virtual ::std::string toString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual void print(::std::string const& prefix_, ::PrintStream& out) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Tag::Type getId() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool equals(::Tag const&) const;
#else // @header-generator platform
    virtual uint64 hash() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void print(std::string const&, ::PrintStream&) const;
#else // @header-generator platform
    virtual bool equals(::Tag const& rhs) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Tag> copy() const;
#else // @header-generator platform
    virtual void deleteChildren() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong hash() const;
#else // @header-generator platform
    virtual ~ListTag() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(std::unique_ptr<Tag>);
#else // @header-generator platform
    MCAPI void add(::std::unique_ptr<::Tag> tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<ListTag> copyList() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag> copyList() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachCompoundTag(::brstd::function_ref<void(const CompoundTag&)>) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> load(::IDataInput& dis, int depth);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void write(::IDataOutput& dos, int depth) const;
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
    MCNAPI void $deleteChildren();
#else // @header-generator platform
    MCAPI void $write(::IDataOutput& dos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $write(::IDataOutput&) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $load(::IDataInput&);
#else // @header-generator platform
    MCFOLD ::Tag::Type $getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Tag::Type $getId() const;
#else // @header-generator platform
    MCAPI void $print(::std::string const& prefix_, ::PrintStream& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $equals(::Tag const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Tag> $copy() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $print(std::string const&, ::PrintStream&) const;
#else // @header-generator platform
    MCAPI uint64 $hash() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Tag> $copy() const;
#else // @header-generator platform
    MCAPI bool $equals(::Tag const& rhs) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $hash() const;
#else // @header-generator platform
    MCAPI void $deleteChildren();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
