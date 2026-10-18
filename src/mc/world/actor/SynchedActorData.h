#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class CompoundTag;
class DataItem;
class EntityContext;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDataDirtyFlagsComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class SynchedActorData {
public:
    // SynchedActorData inner types declare
    // clang-format off
    struct CopyableDataList;
    // clang-format on

    // SynchedActorData inner types define
    struct CopyableDataList {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataItem>>> mData;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mData;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        CopyableDataList(CopyableDataList const&);
        CopyableDataList();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit CopyableDataList(std::vector<std::unique_ptr<DataItem>>&&);
#else // @header-generator platform
        MCAPI ::SynchedActorData::CopyableDataList& operator=(::SynchedActorData::CopyableDataList const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::SynchedActorData::CopyableDataList& operator=(::SynchedActorData::CopyableDataList const&);

        MCNAPI ~CopyableDataList();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(std::vector<std::unique_ptr<DataItem>>&&);
#else // @header-generator platform
        MCAPI ~CopyableDataList();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using DataList = std::vector<std::unique_ptr<DataItem>>;

    using TypeInt8 = schar;
#else // @header-generator platform
    using DataList = ::std::vector<::std::unique_ptr<::DataItem>>;
#endif // @header-generator platform

    using ID = ushort;

#if defined(LL_PLAT_A) // @header-generator platform
    using TypeShort = short;
#else // @header-generator platform
    using TypeFloat = float;
#endif // @header-generator platform

    using TypeInt = int;

#if defined(LL_PLAT_A) // @header-generator platform
    using TypeInt64 = long;
#else // @header-generator platform
    using TypeInt64 = int64;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using TypeFloat = float;
#else // @header-generator platform
    using TypeInt8 = schar;

    using TypeShort = short;

    using TypeString = ::std::string;
#endif // @header-generator platform

    using TypeVec3 = ::Vec3;

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    template <class T>
    MCAPI void set(ushort id, T const& value);

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataItem>>> mItemsArray;
    ::ll::TypedStorage<8, 24, std::bitset<141>>                       mDirtyFlags;
    ::ll::TypedStorage<8, 24, std::bitset<141>>                       mHasComponentData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DataItem>>> mItemsArray;
    ::ll::TypedStorage<8, 24, ::std::bitset<141>>                           mDirtyFlags;
    ::ll::TypedStorage<8, 24, ::std::bitset<141>>                           mHasComponentData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SynchedActorData& operator=(SynchedActorData const&);
    SynchedActorData(SynchedActorData const&);
    SynchedActorData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SynchedActorData(::SynchedActorData&&);
#else // @header-generator platform
    MCAPI ::SynchedActorData _clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SynchedActorData _clone() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool assignValue(::DataItem const& newItem);

    MCAPI void assignValues(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DataItem* _find(ushort) const;
#else // @header-generator platform
    MCAPI ::CompoundTag const& getCompoundTag(ushort id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DataItem& _get(ushort);
#else // @header-generator platform
    MCAPI ::SynchedActorData& operator=(::SynchedActorData&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _resizeToContain(ushort);
#else // @header-generator platform
    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packAll(::EntityContext const& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool assignValue(::DataItem const&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::unique_ptr<::DataItem>> packDirty(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void assignValues(std::vector<std::unique_ptr<DataItem>> const&, ::Actor&, std::optional<ulong>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void queueAssignment(
        ::std::vector<::std::unique_ptr<::DataItem>> const& items,
        ::Actor&                                            actor,
        ::std::optional<uint64>                             targetFrame
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFloat(ushort) const;

    MCNAPI int getInt(ushort) const;

    MCNAPI long getInt64(ushort) const;

    MCNAPI schar getInt8(ushort) const;

    MCNAPI short getShort(ushort) const;

    MCNAPI std::string const& getString(ushort) const;

    MCNAPI ::Vec3 getVec3(ushort) const;

    MCNAPI bool hasData(ushort) const;

    MCNAPI ::SynchedActorData& operator=(::SynchedActorData&&);

    MCNAPI std::vector<std::unique_ptr<DataItem>> packAll(::EntityContext const&) const;

    MCNAPI std::vector<std::unique_ptr<DataItem>> packDirty(::EntityContext&);

    MCNAPI void queueAssignment(std::vector<std::unique_ptr<DataItem>> const&, ::Actor&, std::optional<ulong>);

    MCNAPI ~SynchedActorData();
#else // @header-generator platform
    MCAPI ~SynchedActorData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::vector<std::unique_ptr<DataItem>> cloneDataList(std::vector<std::unique_ptr<DataItem>> const&);
#else // @header-generator platform
    MCAPI static ::std::vector<::std::unique_ptr<::DataItem>>
    cloneDataList(::std::vector<::std::unique_ptr<::DataItem>> const& list);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_ITEM();

    MCNAPI static std::string const& DIFF_ITEMS_SIZE();

    MCNAPI static std::string const& DIFF_ITEM_NULL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SynchedActorData&&);
#else // @header-generator platform
    MCAPI static ::std::string const& DIFF_ITEM_NULL();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
