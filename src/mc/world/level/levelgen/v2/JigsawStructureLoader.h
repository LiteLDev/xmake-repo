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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::UntypedStorage<8, 240>                                                          mProcessorListLoader;
    ::ll::UntypedStorage<8, 240>                                                          mTemplatePoolLoader;
    ::ll::UntypedStorage<8, 240>                                                          mJigsawDefinitionLoader;
    ::ll::UntypedStorage<8, 240>                                                          mJigsawSetLoader;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents>>
        mProcessorListLoader;
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents>>
        mTemplatePoolLoader;
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents>>
        mJigsawDefinitionLoader;
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_20::JigsawStructureSet::Contents,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_21_20::JigsawStructureSet::Contents>>
        mJigsawSetLoader;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureLoader();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JigsawStructureLoader();
#else // @header-generator platform
    virtual ~JigsawStructureLoader() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawStructureLoader(::cereal::ReflectionCtx const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
#else // @header-generator platform
    MCAPI JigsawStructureLoader(
        ::cereal::ReflectionCtx const&                     ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseJigsawDefinitionData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);
#else // @header-generator platform
    MCAPI bool _parseJigsawDefinitionData(
        ::std::string_view                 fileWithExtension,
        ::std::string&&                    fileData,
        ::PuvLoadData::TelemetryEventData& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseProcessorsData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);
#else // @header-generator platform
    MCAPI bool _parseProcessorsData(
        ::std::string_view                 fileWithExtension,
        ::std::string&&                    fileData,
        ::PuvLoadData::TelemetryEventData& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseStructureSetData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);
#else // @header-generator platform
    MCAPI bool _parseStructureSetData(
        ::std::string_view                 fileWithExtension,
        ::std::string&&                    fileData,
        ::PuvLoadData::TelemetryEventData& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _parseTemplatePoolsData(std::string_view, std::string&&, ::PuvLoadData::TelemetryEventData&);
#else // @header-generator platform
    MCAPI bool _parseTemplatePoolsData(
        ::std::string_view                 fileWithExtension,
        ::std::string&&                    fileData,
        ::PuvLoadData::TelemetryEventData& eventData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void loadJigsawStructureData(::ResourcePackManager&, ::IMinecraftEventing&);

    MCNAPI std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData> takeJigsawStructureData();
#else // @header-generator platform
    MCAPI void loadJigsawStructureData(::ResourcePackManager& resourcePackManager, ::IMinecraftEventing& eventing);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);
#else // @header-generator platform
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator);
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
