#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/attribute/AttributeInstance.h"
#include "mc/world/attribute/AttributeInstanceHandle.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Attribute;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AttributeInstance;
#endif // @header-generator platform
class AttributeInstanceConstRef;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AttributeInstanceHandle;
#endif // @header-generator platform
class AttributeInstanceRef;
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename T0, typename T1, typename T2> class iterator_impl;
#else // @header-generator platform
#endif // @header-generator platform
struct AttributeData;
struct AttributeModificationContext;
struct MutableAttributeWithContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace brstd { template<typename T0, typename T1, typename T2, typename T3, typename T4> class associative_adapter; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BaseAttributeMap {
public:
    // BaseAttributeMap inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using UnderlyingMapContainer =
        ::brstd::flat_map<uint, AttributeInstance, std::less<uint>, std::vector<uint>, std::vector<AttributeInstance>>;
#else // @header-generator platform
    using UnderlyingMapContainer = ::brstd::
        flat_map<uint, ::AttributeInstance, ::std::less<uint>, ::std::vector<uint>, ::std::vector<::AttributeInstance>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                     mInstanceMap;
    ::ll::TypedStorage<8, 24, std::vector<AttributeInstanceHandle>> mDirtyAttributes;
    ::ll::UntypedStorage<8, 16>                                     mOnAttributeModified;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint,
            ::AttributeInstance,
            ::std::less<uint>,
            ::std::vector<uint>,
            ::std::vector<::AttributeInstance>>>
                                                                                     mInstanceMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeInstanceHandle>>              mDirtyAttributes;
    ::ll::TypedStorage<8, 8, void (BaseAttributeMap::*)(::AttributeInstance const&)> mOnAttributeModified;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    LLAPI void   setDirty(AttributeInstance const& attribute);
    LLNDAPI bool setCurrentValue(Attribute const& attribute, float value);
    LLNDAPI bool setMaxValue(Attribute const& attribute, float value);
    LLNDAPI bool setDefaultValue(Attribute const& attribute, float value);
#endif // @header-generator platform

public:
    // prevent constructor by default
    BaseAttributeMap& operator=(BaseAttributeMap const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BaseAttributeMap();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BaseAttributeMap(::BaseAttributeMap const&);
#else // @header-generator platform
    MCAPI BaseAttributeMap(::BaseAttributeMap const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AttributeInstanceRef UnsafePromoteRawRefToAccessRef(::AttributeInstance&) const;
#else // @header-generator platform
    MCAPI void _onAttributeModified(::AttributeInstance const& attributeInstance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onAttributeModified(::AttributeInstance const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCFOLD void _onAttributeModifiedDisabled(::AttributeInstance const&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onAttributeModifiedDisabled(::AttributeInstance const&);
#else // @header-generator platform
    MCAPI ::AttributeInstanceConstRef getInstance(::Attribute const& attribute) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::brstd::associative_adapter<
        uint,
        AttributeInstance,
        std::less<uint>,
        std::vector<uint>,
        std::vector<AttributeInstance>>::
        iterator_impl<const uint*, const AttributeInstance*, std::pair<const uint&, const AttributeInstance&>>
        begin() const;
#else // @header-generator platform
    MCAPI ::AttributeInstanceRef getMutableInstance(::HashedString const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::brstd::associative_adapter<
        uint,
        AttributeInstance,
        std::less<uint>,
        std::vector<uint>,
        std::vector<AttributeInstance>>::
        iterator_impl<uint*, AttributeInstance*, std::pair<const uint&, AttributeInstance&>>
        begin();
#else // @header-generator platform
    MCAPI ::MutableAttributeWithContext getMutableInstanceWithContext(::Attribute const& attribute);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::AttributeInstanceRef registerAttribute(::Attribute const& baseAttribute);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void updateAttribute(::AttributeData const&, ::AttributeInstanceRef, ::AttributeModificationContext&);
#else // @header-generator platform
    MCAPI static void updateAttribute(
        ::AttributeData const&          attributeData,
        ::AttributeInstanceRef          attributeRef,
        ::AttributeModificationContext& context
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_ATTRIBUTES();
#else // @header-generator platform
    MCAPI static ::std::string const& DIFF_ATTRIBUTES_SIZE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_ATTRIBUTES_SIZE();
#else // @header-generator platform
    MCAPI static ::std::string const& DIFF_DIRTY_ATTRIBUTES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_DIRTY_ATTRIBUTES();
#else // @header-generator platform
    MCAPI static ::std::string const& DIFF_DIRTY_ATTRIBUTES_SIZE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_DIRTY_ATTRIBUTES_SIZE();
#else // @header-generator platform
    MCAPI static ::std::string const& DIFF_NO_ATTRIBUTES();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& DIFF_NO_ATTRIBUTES();

    MCNAPI static ::AttributeInstance& mInvalidInstance();
#else // @header-generator platform
    MCAPI static ::AttributeInstance& mInvalidInstance();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BaseAttributeMap const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BaseAttributeMap const&);
#endif // @header-generator platform
    // NOLINTEND
};
