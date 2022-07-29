#pragma once
#include "../statement.h"
#include "../expression.h"
#include <string>
#include <vector>
#include <memory>

namespace compiler
{
	namespace ast
	{
		struct ReturnStatement : Statement
		{
			std::unique_ptr<Expression> argument;
			virtual void print(Printer& out) override
			{
				out.print("return:");
				out.indent();
				argument->print(out);
				out.unindent();
			}
		};
	}; // namespace ast
};	   // namespace compiler