#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/DurableCustom.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
struct HardwareCompatibilityContext;
namespace Json { class Value; }
// clang-format on

struct EduContentCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1128, ::DurableCustom> mDurable;
    ::ll::TypedStorage<8, 24, std::string>       mCreatorName;
    ::ll::TypedStorage<4, 4, int>                mCompletionTime;
    ::ll::TypedStorage<4, 4, int>                mMinAge;
    ::ll::TypedStorage<4, 4, int>                mMaxAge;
    ::ll::TypedStorage<8, 24, std::string>       mObjectives;
    ::ll::TypedStorage<8, 24, std::string>       mLearningObjectives;
    ::ll::TypedStorage<8, 24, std::string>       mVideoLink;
    ::ll::TypedStorage<8, 24, std::string>       mWebLink;
    ::ll::TypedStorage<8, 24, std::string>       mResourceLink;
    ::ll::TypedStorage<8, 24, std::string>       mTeacherNotes;
    ::ll::TypedStorage<8, 24, std::string>       mAssessment;
    ::ll::TypedStorage<8, 24, std::string>       mStudentActivities;
    ::ll::TypedStorage<8, 24, std::string>       mExtensions;
    ::ll::TypedStorage<8, 24, std::string>       mEssentialQuestions;
    ::ll::TypedStorage<8, 24, std::string>       mDifficulty;
    // NOLINTEND

public:
    // prevent constructor by default
    EduContentCustom& operator=(EduContentCustom const&);
    EduContentCustom();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduContentCustom(::EduContentCustom const&);

    MCNAPI void fromJson(::Json::Value const&, bool, ::CustomDocumentModifier*, ::HardwareCompatibilityContext const&);

    MCNAPI ~EduContentCustom();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EduContentCustom const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
