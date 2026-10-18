#pragma once

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "ll/api/base/Meta.h"
#endif // @header-generator platform
#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDataIDs.h"
#include "mc/world/level/BlockPos.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/world/actor/DataItemType.h"

class DataItem {
public:
    // DataItem inner types define
    using ID = ushort;

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using TypeList = ll::meta::TypeList<schar, short, int, float, std::string, CompoundTag, BlockPos, int64, Vec3>;

public:
    template <typename T>
        requires(DataItem::TypeList::contains<T>)
    [[nodiscard]] constexpr optional_ref<T const> getData() const;
    template <typename T>
        requires(DataItem::TypeList::contains<T>)
    [[nodiscard]] constexpr optional_ref<T> getData();
    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    constexpr bool setData(T&& value);

    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(ushort key, T&& value);
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(ushort key, bool value) {
        return create(key, (schar)value);
    }
    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(::ActorDataIDs key, T&& value) {
        return create(static_cast<std::underlying_type_t<::ActorDataIDs>>(key), std::forward<T>(value));
    }
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(::ActorDataIDs key, bool value) {
        return create(key, (schar)value);
    }

protected:
    DataItem() = default;

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DataItem();
#else // @header-generator platform
    virtual ~DataItem() = default;
#endif // @header-generator platform

    virtual ushort getId() const = 0;

    virtual ::DataItemType getType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isDataEqual(::DataItem const&) const = 0;
#else // @header-generator platform
    virtual bool isDataEqual(::DataItem const& rhs) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<DataItem> clone() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::unique_ptr<::DataItem> clone() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

#include "mc/world/actor/DataItem2.h"
#endif // @header-generator platform
