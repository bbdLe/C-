CPPFLAGS = -std=c++11
object = 15_41.o Query.o StrVec.o TextQuery.o NotQuery.o OrQuery.o AndQuery.o QueryResult.o

main: $(object)
	g++ -o main $(object) -std=c++11

TextQuery.o: TextQuery.h

StrVec.o: StrVec.h

QueryResult.o: QueryResult.h

Query.o: Query.h Query_base.h WordQuery.h

NotQuery.o: Query.h WordQuery.h NotQuery.h Query_base.h

OrQuery.o: Query.h BinaryQuery.h Query_base.h WordQuery.h OrQuery.h

AndQuery.o: Query.h BinaryQuery.h Query_base.h WordQuery.h AndQuery.h

.PHONY: clean

clean:
	-rm main $(object)
