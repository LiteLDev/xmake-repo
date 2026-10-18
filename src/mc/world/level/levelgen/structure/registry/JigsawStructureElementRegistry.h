#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IStructureTemplateManager;
class StructurePoolElement;
namespace JigsawStructureUtils { class StructureElementId; }
// clang-format on

class JigsawStructureElementRegistry {
public:
    // JigsawStructureElementRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StructureElementLookupMap = std::unordered_map<std::string, std::unique_ptr<StructurePoolElement>>;
#else // @header-generator platform
    using StructureElementLookupMap = ::std::unordered_map<::std::string, ::std::unique_ptr<::StructurePoolElement>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<StructurePoolElement>>> mElementLookupMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructurePoolElement>>>
        mElementLookupMap;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolElement const* lookupByName(std::string) const;
#else // @header-generator platform
    MCFOLD ::StructurePoolElement const* _lookupById(::JigsawStructureUtils::StructureElementId const& id) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolElement const* lookupEmptyElement() const;
#else // @header-generator platform
    MCAPI ::StructurePoolElement const* lookupByName(::std::string name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolElement const& registerElement(std::string, std::unique_ptr<StructurePoolElement>&&);
#else // @header-generator platform
    MCAPI ::StructurePoolElement const* lookupEmptyElement() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolElement const&
        registerEmptyElement(::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>);
#else // @header-generator platform
    MCAPI ::StructurePoolElement const&
    registerElement(::std::string name, ::std::unique_ptr<::StructurePoolElement>&& element);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~JigsawStructureElementRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::StructurePoolElement const&
    registerEmptyElement(::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager);
#endif // @header-generator platform
    // NOLINTEND
};
