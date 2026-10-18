#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/ResourceManager.h"
#include "mc/external/render_dragon/materials/CompiledMaterialResource.h"
#include "mc/external/render_dragon/materials/MaterialInitializationOptions.h"
#include "mc/external/render_dragon/materials/MaterialRepositoryIndex.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class CompiledMaterialDefinition; }
namespace dragon::materials::definition::EncryptionVariants { struct SimplePassphrase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
class CompiledMaterialManager
: public ::cg::ResourceManager<dragon::materials::CompiledMaterialResource, std::string, std::unordered_map> {
#else // @header-generator platform
class CompiledMaterialManager {
#endif // @header-generator platform
public:
    // CompiledMaterialManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class MaterialRepositoryIndexLocation : int {
        MaterialService   = 0,
        MaterialDirectory = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 40, std::mutex> mMutex;
    ::ll::TypedStorage<8, 136, ::dragon::materials::MaterialInitializationOptions> mMaterialInitializationOptions;
    ::ll::TypedStorage<8, 40, std::unordered_map<dragon::materials::CompiledMaterialManager::MaterialRepositoryIndexLocation, dragon::materials::MaterialRepositoryIndex>> mMaterialIndices;
    ::ll::UntypedStorage<8, 48> mMaterialLoadCallback;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledMaterialManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompiledMaterialManager(
        ::dragon::materials::MaterialInitializationOptions,
        std::function<bool(const std::string&, std::string&)> const
    );

    MCNAPI bool _loadCompiledMaterialResource(
        std::string const&,
        ::dragon::materials::CompiledMaterialResource&,
        ::dragon::materials::definition::EncryptionVariants::SimplePassphrase,
        std::function<bool(const std::string&, std::string&)> const&
    );

    MCNAPI void _setMaterialRepositoryIndex(
        std::string const&,
        ::dragon::materials::CompiledMaterialManager::MaterialRepositoryIndexLocation
    );

    MCNAPI void freeShaderBlobs();

    MCNAPI std::shared_ptr<dragon::materials::CompiledMaterialDefinition>
           getMaterial(std::string const, ::dragon::materials::definition::EncryptionVariants::SimplePassphrase);

    MCNAPI std::shared_ptr<dragon::materials::CompiledMaterialDefinition>
           getMaterial(std::string const, ::dragon::materials::definition::EncryptionVariants::SimplePassphrase, bool);

    MCNAPI ~CompiledMaterialManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::dragon::materials::MaterialInitializationOptions,
        std::function<bool(const std::string&, std::string&)> const
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class MaterialRepositoryIndexLocation : int {};
#endif // @header-generator platform
};

} // namespace dragon::materials
