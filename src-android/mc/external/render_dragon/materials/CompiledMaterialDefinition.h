#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/PlatformShaderStage.h"
#include "mc/external/render_dragon/materials/definition/BlendMode.h"
#include "mc/external/render_dragon/materials/definition/CustomTypeDeclaration.h"
#include "mc/external/render_dragon/materials/definition/ExternalUniformDeclaration.h"
#include "mc/external/render_dragon/materials/definition/PlatformSupport.h"
#include "mc/external/render_dragon/materials/definition/SamplerDefinition.h"
#include "mc/external/render_dragon/materials/definition/ShaderCodePlatform.h"
#include "mc/external/render_dragon/materials/definition/ShaderInput.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials::definition { template<typename T0, typename T1> class PropertyField; }
// clang-format on

namespace dragon::materials {

class CompiledMaterialDefinition {
public:
    // CompiledMaterialDefinition inner types declare
    // clang-format off
    struct ShaderCode;
    struct Variant;
    struct Pass;
    class VariantSet;
    // clang-format on

    // CompiledMaterialDefinition inner types define
    struct ShaderCode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                                                              mSourceHash;
        ::ll::TypedStorage<8, 24, std::vector<uchar>>                                                mData;
        ::ll::TypedStorage<8, 24, std::map<std::string, dragon::materials::definition::ShaderInput>> mInputs;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ShaderCode(::dragon::materials::CompiledMaterialDefinition::ShaderCode const&);

        MCNAPI ::dragon::materials::CompiledMaterialDefinition::ShaderCode&
        operator=(::dragon::materials::CompiledMaterialDefinition::ShaderCode const&);

        MCNAPI ~ShaderCode();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::dragon::materials::CompiledMaterialDefinition::ShaderCode const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Variant {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<1, 1, bool> mIsSupported;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mFlags;
        ::ll::TypedStorage<8, 40, std::unordered_map<dragon::materials::PlatformShaderStage, dragon::materials::CompiledMaterialDefinition::ShaderCode>> mShaders;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dragon::materials::CompiledMaterialDefinition::Variant&
        operator=(::dragon::materials::CompiledMaterialDefinition::Variant const&);
        // NOLINTEND
    };

    struct Pass {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::materials::PlatformSupport>                                 mPlatformSupport;
        ::ll::TypedStorage<8, 24, std::string>                                                         mFallback;
        ::ll::TypedStorage<8, 24, std::vector<dragon::materials::CompiledMaterialDefinition::Variant>> mVariants;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>>           mFlagDefaultValues;
        ::ll::TypedStorage<4, 8, std::optional<dragon::materials::definition::BlendMode>> mDefaultBlendMode;
        ::ll::TypedStorage<4, 4, uint>                                                    mOutputBindingSignature;
        // NOLINTEND

    public:
        // prevent constructor by default
        Pass(Pass const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dragon::materials::CompiledMaterialDefinition::Pass&
        operator=(::dragon::materials::CompiledMaterialDefinition::Pass const&);
        // NOLINTEND
    };

    class VariantSet {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::materials::CompiledMaterialDefinition const&>       mDefinition;
        ::ll::TypedStorage<8, 8, ::dragon::materials::CompiledMaterialDefinition::Pass const&> mPass;
        ::ll::TypedStorage<8, 24, std::vector<const dragon::materials::CompiledMaterialDefinition::Variant*>> mVariants;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string> const>             mDefaultFlagValues;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string> const>             mSetFlags;
        ::ll::TypedStorage<8, 8, ::dragon::materials::CompiledMaterialDefinition::Variant const*> mDefaultVariant;
        // NOLINTEND

    public:
        // prevent constructor by default
        VariantSet& operator=(VariantSet const&);
        VariantSet();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::dragon::materials::CompiledMaterialDefinition::Variant const*
        _tryResolve(std::unordered_map<std::string, std::string> const&) const;

        MCNAPI ~VariantSet();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, dragon::materials::CompiledMaterialDefinition::Pass>> mPasses;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mParentName;
    ::ll::TypedStorage<8, 8, ulong> mAllocatedMemory;
    ::ll::UntypedStorage<8, 40> mProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mPropertyAliases;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, dragon::materials::definition::SamplerDefinition>> mIndexedSamplers;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, dragon::materials::definition::CustomTypeDeclaration>> mCustomTypes;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::materials::CompiledMaterialDefinition::VariantSet const _tryLocateVariants(
        ::dragon::materials::CompiledMaterialDefinition::Pass const&,
        std::unordered_map<std::string, std::string> const&
    ) const;

    MCNAPI void trim();

    MCNAPI std::optional<dragon::materials::CompiledMaterialDefinition::VariantSet> const
           tryLocateVariants(std::string const&, std::unordered_map<std::string, std::string> const&) const;

    MCNAPI ~CompiledMaterialDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials
