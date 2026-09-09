#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class DataItem;
class EntityContext;
class Vec3;
struct ActorDataDirtyFlagsComponent;
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
        ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataItem>>> mData;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit CopyableDataList(std::vector<std::unique_ptr<DataItem>>&&);

        MCNAPI ::SynchedActorData::CopyableDataList& operator=(::SynchedActorData::CopyableDataList const&);

        MCNAPI ~CopyableDataList();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(std::vector<std::unique_ptr<DataItem>>&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using DataList = std::vector<std::unique_ptr<DataItem>>;

    using TypeInt8 = schar;

    using ID = ushort;

    using TypeShort = short;

    using TypeInt = int;

    using TypeInt64 = long;

    using TypeFloat = float;

    using TypeVec3 = ::Vec3;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<DataItem>>> mItemsArray;
    ::ll::TypedStorage<8, 24, std::bitset<141>>                       mDirtyFlags;
    ::ll::TypedStorage<8, 24, std::bitset<141>>                       mHasComponentData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SynchedActorData(::SynchedActorData&&);

    MCNAPI ::SynchedActorData _clone() const;

    MCNAPI ::DataItem* _find(ushort) const;

    MCNAPI ::DataItem& _get(ushort);

    MCNAPI void _resizeToContain(ushort);

    MCNAPI bool assignValue(::DataItem const&);

    MCNAPI void assignValues(std::vector<std::unique_ptr<DataItem>> const&, ::Actor&, std::optional<ulong>);

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::vector<std::unique_ptr<DataItem>> cloneDataList(std::vector<std::unique_ptr<DataItem>> const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& DIFF_ITEM();

    MCNAPI static std::string const& DIFF_ITEMS_SIZE();

    MCNAPI static std::string const& DIFF_ITEM_NULL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SynchedActorData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
