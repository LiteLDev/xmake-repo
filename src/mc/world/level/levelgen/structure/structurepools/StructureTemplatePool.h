#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class Random;
class StructurePoolElement;
struct StructureTemplateRegistrationContext;
struct WeightedStructureTemplateRegistration;
// clang-format on

class StructureTemplatePool {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                              mName;
    ::ll::TypedStorage<8, 24, std::vector<const StructurePoolElement*>> mTemplates;
    ::ll::TypedStorage<8, 24, std::string>                              mFallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::StructurePoolElement const*>> mTemplates;
    ::ll::TypedStorage<8, 32, ::std::string>                                mFallback;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    StructureTemplatePool& operator=(StructureTemplatePool const&);
    StructureTemplatePool(StructureTemplatePool const&);
#else // @header-generator platform
    StructureTemplatePool();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    StructureTemplatePool(std::string, std::string, std::vector<std::pair<const StructurePoolElement*, int>> const&);
#else // @header-generator platform
    MCAPI StructureTemplatePool(
        ::std::string                                                         name,
        ::std::string                                                         fallback,
        ::std::vector<::std::pair<::StructurePoolElement const*, int>> const& templates
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getFallback() const;
#else // @header-generator platform
    MCAPI ::std::vector<uint64> getShuffledTemplateIndexes(::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getMaxHeight() const;

    MCNAPI ::StructurePoolElement const* getRandomTemplate(::Random&) const;

    MCNAPI std::vector<ulong> getShuffledTemplateIndexes(::Random&) const;

    MCNAPI ::StructurePoolElement const* getTemplate(ulong) const;

    MCNAPI std::vector<const StructurePoolElement*> const& getTemplates() const;

    MCNAPI bool isValid() const;

    MCNAPI ~StructureTemplatePool();
#else // @header-generator platform
    MCAPI ~StructureTemplatePool();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<StructureTemplatePool> create(
        ::StructureTemplateRegistrationContext,
        std::string_view,
        std::string_view,
        std::initializer_list<WeightedStructureTemplateRegistration>,
        ::Projection
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::StructureTemplatePool> create(
        ::StructureTemplateRegistrationContext                           context,
        ::std::string_view                                               name,
        ::std::string_view                                               fallback,
        ::std::initializer_list<::WeightedStructureTemplateRegistration> pieces,
        ::Projection                                                     projection
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string, std::vector<std::pair<const StructurePoolElement*, int>> const&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string                                                         name,
        ::std::string                                                         fallback,
        ::std::vector<::std::pair<::StructurePoolElement const*, int>> const& templates
    );
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
};
