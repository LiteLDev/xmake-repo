#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/actor/DefinitionEvent.h"
#include "mc/world/level/block/definition/BlockComponentGroupDescription.h"
#include "mc/world/level/block/definition/BlockDescription.h"
#include "mc/world/level/block/definition/BlockPermutationDescription.h"

// auto generated forward declare list
// clang-format off
class CerealDocumentUpgrader;
class SemVersionConstant;
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                 mFormatVersion;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                               mMinEngineVersion;
    ::ll::UntypedStorage<8, 24>                                                 mOriginalJsonVersion;
    ::ll::TypedStorage<8, 200, ::BlockDescription>                              mDescription;
    ::ll::TypedStorage<8, 88, ::BlockComponentGroupDescription>                 mBaseComponents;
    ::ll::TypedStorage<8, 24, std::vector<BlockPermutationDescription>>         mPermutationDescriptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDefinition(::BlockDefinition const&);

    MCNAPI BlockDefinition(::BlockDefinition&&);

    MCNAPI ~BlockDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::CerealDocumentUpgrader& initCerealDocumentUpgrader(::cereal::ReflectionCtx&);

    MCNAPI static void registerBlockDefinitionTypes(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockDefinition const&);

    MCNAPI void* $ctor(::BlockDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
