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
    ::ll::TypedStorage<8, 24, std::string>                              mName;
    ::ll::TypedStorage<8, 24, std::vector<const StructurePoolElement*>> mTemplates;
    ::ll::TypedStorage<8, 24, std::string>                              mFallback;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplatePool& operator=(StructureTemplatePool const&);
    StructureTemplatePool(StructureTemplatePool const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    StructureTemplatePool(std::string, std::string, std::vector<std::pair<const StructurePoolElement*, int>> const&);

    MCNAPI std::string const& getFallback() const;

    MCNAPI int getMaxHeight() const;

    MCNAPI ::StructurePoolElement const* getRandomTemplate(::Random&) const;

    MCNAPI std::vector<ulong> getShuffledTemplateIndexes(::Random&) const;

    MCNAPI ::StructurePoolElement const* getTemplate(ulong) const;

    MCNAPI std::vector<const StructurePoolElement*> const& getTemplates() const;

    MCNAPI bool isValid() const;

    MCNAPI ~StructureTemplatePool();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<StructureTemplatePool> create(
        ::StructureTemplateRegistrationContext,
        std::string_view,
        std::string_view,
        std::initializer_list<WeightedStructureTemplateRegistration>,
        ::Projection
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string, std::vector<std::pair<const StructurePoolElement*, int>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
