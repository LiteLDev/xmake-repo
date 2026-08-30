#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/attribute/AttributeInstance.h"
#include "mc/world/attribute/AttributeInstanceHandle.h"

// auto generated forward declare list
// clang-format off
class Attribute;
class AttributeInstanceConstRef;
class AttributeInstanceRef;
class HashedString;
template<typename T0, typename T1, typename T2> class iterator_impl;
struct AttributeData;
struct AttributeModificationContext;
struct MutableAttributeWithContext;
namespace brstd { template<typename T0, typename T1, typename T2, typename T3, typename T4> class associative_adapter; }
// clang-format on

class BaseAttributeMap {
public:
    // BaseAttributeMap inner types define
    using UnderlyingMapContainer =
        ::brstd::flat_map<uint, AttributeInstance, std::less<uint>, std::vector<uint>, std::vector<AttributeInstance>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                     mInstanceMap;
    ::ll::TypedStorage<8, 24, std::vector<AttributeInstanceHandle>> mDirtyAttributes;
    ::ll::UntypedStorage<8, 16>                                     mOnAttributeModified;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseAttributeMap& operator=(BaseAttributeMap const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseAttributeMap(::BaseAttributeMap const&);

    MCNAPI ::AttributeInstanceRef UnsafePromoteRawRefToAccessRef(::AttributeInstance&) const;

    MCNAPI void _onAttributeModified(::AttributeInstance const&);

    MCNAPI void _onAttributeModifiedDisabled(::AttributeInstance const&);

    MCNAPI ::brstd::associative_adapter<
        uint,
        AttributeInstance,
        std::less<uint>,
        std::vector<uint>,
        std::vector<AttributeInstance>>::
        iterator_impl<const uint*, const AttributeInstance*, std::pair<const uint&, const AttributeInstance&>>
        begin() const;

    MCNAPI ::brstd::associative_adapter<
        uint,
        AttributeInstance,
        std::less<uint>,
        std::vector<uint>,
        std::vector<AttributeInstance>>::
        iterator_impl<uint*, AttributeInstance*, std::pair<const uint&, AttributeInstance&>>
        begin();

    MCNAPI void clearDirtyAttributes();

    MCNAPI ::AttributeModificationContext createModificationContext();

    MCNAPI void disableAttributeDirtying();

    MCNAPI ::brstd::associative_adapter<
        uint,
        AttributeInstance,
        std::less<uint>,
        std::vector<uint>,
        std::vector<AttributeInstance>>::
        iterator_impl<const uint*, const AttributeInstance*, std::pair<const uint&, const AttributeInstance&>>
        end() const;

    MCNAPI ::brstd::associative_adapter<
        uint,
        AttributeInstance,
        std::less<uint>,
        std::vector<uint>,
        std::vector<AttributeInstance>>::
        iterator_impl<uint*, AttributeInstance*, std::pair<const uint&, AttributeInstance&>>
        end();

    MCNAPI std::vector<AttributeInstanceHandle> const& getDirtyAttributes() const;

    MCNAPI ::AttributeInstanceConstRef getInstance(::Attribute const&) const;

    MCNAPI ::AttributeInstanceConstRef getInstance(uint) const;

    MCNAPI ::AttributeInstanceRef getMutableInstance(::Attribute const&);

    MCNAPI ::AttributeInstanceRef getMutableInstance(::HashedString const&);

    MCNAPI ::MutableAttributeWithContext getMutableInstanceWithContext(::Attribute const&);

    MCNAPI std::vector<AttributeInstanceHandle> getSyncableAttributes() const;

    MCNAPI void onAttributeModified(::AttributeInstanceConstRef);

    MCNAPI ::AttributeInstanceRef registerAttribute(::Attribute const&);

    MCNAPI void updateOrCreateAttribute(::AttributeData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void updateAttribute(::AttributeData const&, ::AttributeInstanceRef, ::AttributeModificationContext&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& DIFF_ATTRIBUTES();

    MCNAPI static std::string const& DIFF_ATTRIBUTES_SIZE();

    MCNAPI static std::string const& DIFF_DIRTY_ATTRIBUTES();

    MCNAPI static std::string const& DIFF_DIRTY_ATTRIBUTES_SIZE();

    MCNAPI static std::string const& DIFF_NO_ATTRIBUTES();

    MCNAPI static ::AttributeInstance& mInvalidInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseAttributeMap const&);
    // NOLINTEND
};
