// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include "CppSharp.h"
#include <Sources.h>

namespace CppSharp
{
    namespace Parser
    {
        ref class SourceRange;
        value struct SourceLocation;
    }
}

namespace CppSharp
{
    namespace Parser
    {
        public value struct SourceLocation
        {
        public:

            SourceLocation(struct ::CppSharp::CppParser::SourceLocation* native);
            SourceLocation(struct ::CppSharp::CppParser::SourceLocation* native, bool ownNativeInstance);
            static SourceLocation^ __CreateInstance(::System::IntPtr native);
            static SourceLocation^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
            SourceLocation(unsigned int ID);

            property unsigned int ID
            {
                unsigned int get();
                void set(unsigned int);
            }

            static operator CppSharp::Parser::SourceLocation(unsigned int ID);

        private:

            unsigned int __ID;
        };

        public ref class SourceRange : ICppInstance
        {
        public:

            property struct ::CppSharp::CppParser::SourceRange* NativePtr;
            property ::System::IntPtr __Instance
            {
                virtual ::System::IntPtr get();
                virtual void set(::System::IntPtr instance);
            }

            SourceRange(struct ::CppSharp::CppParser::SourceRange* native);
            SourceRange(struct ::CppSharp::CppParser::SourceRange* native, bool ownNativeInstance);
            static SourceRange^ __CreateInstance(::System::IntPtr native);
            static SourceRange^ __CreateInstance(::System::IntPtr native, bool __ownsNativeInstance);
            SourceRange(CppSharp::Parser::SourceRange^ _0);

            SourceRange();

            ~SourceRange();

            property CppSharp::Parser::SourceLocation BeginLoc
            {
                CppSharp::Parser::SourceLocation get();
                void set(CppSharp::Parser::SourceLocation);
            }

            property CppSharp::Parser::SourceLocation EndLoc
            {
                CppSharp::Parser::SourceLocation get();
                void set(CppSharp::Parser::SourceLocation);
            }

        protected:

            bool __ownsNativeInstance;
        };
    }
}
