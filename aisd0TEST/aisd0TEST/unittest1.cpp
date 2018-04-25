#include "stdafx.h"
#include "CppUnitTest.h"
#include "C:\Users\Administrator\source\repos\aisd0\aisd0\main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace aisd0TEST
{		
	TEST_CLASS(AlgTest)
	{
	public:
		
		TEST_METHOD(transformTest)
		{	
			std::vector<std::string> s = PatternFind::transform( "C:\Users\Administrator\source\repos\aisd0\patterns\1000_pattern.txt" );
			
			std::string mirror = "2BECBECC10BE905630C36EEBF39A1C680CC143AF3860CB34EB5D0E52ED6E70B840F5D824BD45F6F447CD149DC7CC8BA9E1A74E2FBD9E95F0BA829F6A9FB8AE0BE5BFBE2311D2B9B26CCDFA208E6FDC5AE24AE81B0C55C96D5E820C9F90AF3F4C945FB3134DB99595DD5C3C677E2A3D0E9CD1AACEF2EDEFCBDEF6075DF86E3D8BCBBF28AC5EED2EBDD06EBF5FFCEF1350C5360445F3EB4AAAF6DF5C369CAE4B9CA44FE6ED26D8BDEC7A76B4E1CEE6DA6ED96A1B2CB0DF4D78F877AF522995CFEED28BAC0FBBCE3BE9EC7881BCFD64E0560E0EB418CC594DC13AFD2BAB6A017DCE9298332FF2910EC9B023918D750761BA59EA7FFD8A1BD654B1C6FFAFF593EF49D6D88FFD5924FC8D650E3CD19C0C68380E6C2EE564FECE77CCB8FBAB3E6BEA0A7DBA0EBBA272BD2E1EF6FB5C509DFEAEB21F1CD094BCE1FB48AB1BAC29BCB50FFA3FD02399F4FC76ABDC7EA7FAFDB35FD5BDA14BBDA4E05CAAFF041DC07FB0F965CBDCEDE1C9ACDFDEFBDEF711DCDA1ABD5DC0D1F2B3ABF97A6814EBB4388AEEA9A0677B4C75D6DFCFB12E59142EEA99295BE7F26E5DE64F868A0E86CBCD024C37A8EBF60CDB5ABEBD51C62A0C1EB983DCABECF3DA09E2525321484BB054F0BE8AECCCE7A523DA0D1EFC397D5D02F3B59D8F9DAB38ECADE67BF8EBB0B8621CEC0C9F8CB66A960869A459DE4DF62BB14F180DCE60";

			Assert::AreEqual( s.at( 0 ), mirror );
		}

		TEST_METHOD( findTest ) {
			std::vector<std::string> s = PatternFind::transform( "C:\Users\Administrator\source\repos\aisd0\patterns\1000_pattern.txt" );
			
			std::pair<int, int> p( 162, 54 );

			Assert::AreEqual( PatternFind::find( s ), p );
		}

	};
}