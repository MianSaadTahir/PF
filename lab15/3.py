def area_of_country(country_name,area):
    area_landmass=(area/148940000)*100
    area_landmass=round(area_landmass,2)
    return area_landmass

def main():
    country_name=input("Enter country's name: ")
    area=int(input("Enter area: "))
    result=area_of_country(country_name,area)
    print(country_name,"is",result,"% of the total world's landmass")

if __name__=="__main__":
    main()