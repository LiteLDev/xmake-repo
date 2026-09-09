#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
namespace PuvLoadData { struct TelemetryEventData; }
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct Contents; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructureLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::UntypedStorage<8, 240>                                                          mProcessorListLoader;
    ::ll::UntypedStorage<8, 240>                                                          mTemplatePoolLoader;
    ::ll::UntypedStorage<8, 240>                                                          mJigsawDefinitionLoader;
    ::ll::UntypedStorage<8, 240>                                                          mJigsawSetLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawStructureLoader();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructureLoader(::cereal::ReflectionCtx const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    MCNAPI bool _parseJigsawDefinitionData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);

    MCNAPI bool _parseProcessorsData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);

    MCNAPI bool _parseStructureSetData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);

    MCNAPI bool _parseTemplatePoolsData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);

    MCNAPI void loadJigsawStructureData(::ResourcePackManager&, ::IMinecraftEventing&);

    MCNAPI std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData> takeJigsawStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
